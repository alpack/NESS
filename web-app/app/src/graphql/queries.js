// eslint-disable
// this is an auto generated file. This will be overwritten

export const getAccount = `query GetAccount($id: ID!) {
  getAccount(id: $id) {
    id
    name
    lastLogin
    hero {
      id
      name
      online
      level
      exp
      title
      lore
      skills {
        id
        rank
        description
      }
    }
  }
}
`;
export const listAccounts = `query ListAccounts(
  $filter: ModelAccountFilterInput
  $limit: Int
  $nextToken: String
) {
  listAccounts(filter: $filter, limit: $limit, nextToken: $nextToken) {
    items {
      id
      name
      lastLogin
      hero {
        id
        name
        online
        level
        exp
        title
        lore
        skills {
          id
          rank
          description
        }
      }
    }
    nextToken
  }
}
`;
export const getHero = `query GetHero($id: ID!) {
  getHero(id: $id) {
    id
    account {
      id
      name
      lastLogin
    }
    name
    image {
      id
      bucket
    }
    online
    level
    exp
    title
    race {
      id
      name
      description
    }
    lore
    skills {
      id
      rank
      description
    }
  }
}
`;
export const listHeros = `query ListHeros(
  $filter: ModelHeroFilterInput
  $limit: Int
  $nextToken: String
) {
  listHeros(filter: $filter, limit: $limit, nextToken: $nextToken) {
    items {
      id
      account {
        id
        name
        lastLogin
      }
      name
      image {
        id
        bucket
      }
      online
      level
      exp
      title
      race {
        id
        name
        description
      }
      lore
      skills {
        id
        rank
        description
      }
    }
    nextToken
  }
}
`;
export const getImage = `query GetImage($id: ID!) {
  getImage(id: $id) {
    id
    bucket
    fullsize {
      key
      width
      height
    }
    thumbnail {
      key
      width
      height
    }
  }
}
`;
export const listImages = `query ListImages(
  $filter: ModelImageFilterInput
  $limit: Int
  $nextToken: String
) {
  listImages(filter: $filter, limit: $limit, nextToken: $nextToken) {
    items {
      id
      bucket
      fullsize {
        key
        width
        height
      }
      thumbnail {
        key
        width
        height
      }
    }
    nextToken
  }
}
`;
export const getRace = `query GetRace($id: ID!) {
  getRace(id: $id) {
    id
    name
    description
  }
}
`;
export const listRaces = `query ListRaces(
  $filter: ModelRaceFilterInput
  $limit: Int
  $nextToken: String
) {
  listRaces(filter: $filter, limit: $limit, nextToken: $nextToken) {
    items {
      id
      name
      description
    }
    nextToken
  }
}
`;
