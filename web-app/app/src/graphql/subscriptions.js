// eslint-disable
// this is an auto generated file. This will be overwritten

export const onCreateAccount = `subscription OnCreateAccount {
  onCreateAccount {
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
    }
  }
}
`;
export const onUpdateAccount = `subscription OnUpdateAccount {
  onUpdateAccount {
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
    }
  }
}
`;
export const onDeleteAccount = `subscription OnDeleteAccount {
  onDeleteAccount {
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
    }
  }
}
`;
export const onCreateHero = `subscription OnCreateHero {
  onCreateHero {
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
export const onUpdateHero = `subscription OnUpdateHero {
  onUpdateHero {
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
export const onDeleteHero = `subscription OnDeleteHero {
  onDeleteHero {
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
export const onCreateImage = `subscription OnCreateImage {
  onCreateImage {
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
export const onUpdateImage = `subscription OnUpdateImage {
  onUpdateImage {
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
export const onDeleteImage = `subscription OnDeleteImage {
  onDeleteImage {
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
export const onCreateRace = `subscription OnCreateRace {
  onCreateRace {
    id
    name
    description
  }
}
`;
export const onUpdateRace = `subscription OnUpdateRace {
  onUpdateRace {
    id
    name
    description
  }
}
`;
export const onDeleteRace = `subscription OnDeleteRace {
  onDeleteRace {
    id
    name
    description
  }
}
`;
